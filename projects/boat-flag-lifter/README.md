# Boat Flag Lifter

A compact 3D printed boat flag lifting mechanism built around a clamp-on mount, a 90 degree rotating arm, and a servo-driven pivot. The goal is to create a reliable low-cost prototype that can raise and lower a boat flag without needing expensive CNC aluminum parts.

## Project Summary

This project started as a mechanical prototype for a powered flag mount. Early pricing showed that CNC milled aluminum parts would cost about $188 per piece, with four main pieces required. That would push the prototype near $800 after tax and shipping, which is far beyond the target budget.

The current direction is a hybrid design:

- 3D printed clamp and housing parts
- Stainless hardware for the structural pivot
- Washer-supported rotating joints
- Thin aluminum bushing material made from black aluminum business cards
- Future waterproof metal-gear servo integration
- Budget target near $40 for the working prototype

The early printed mechanism already works well mechanically, including the pivot and bushing stack. The next step is documenting the design, refining the load path, and adding electronics for powered motion.

## Design Goals

- Keep the first working prototype inexpensive.
- Use printed parts where they make sense.
- Put metal only where wear, clamping force, or pivot load actually matter.
- Make the pivot bolt the main structural member.
- Keep the clamp removable and boat-friendly.
- Build in a repeatable 90 degree stop.
- Leave room for servo mounting and linkage adjustment.
- Make the project easy to revise as testing exposes weak points.

## Mechanical Design

The assembly is centered around a clamp body and a rotating flag arm. The clamp body provides the boat attachment point, while the rotating arm carries the flag and pivots through about 90 degrees.

Important mechanical features:

- Six clamp bolts distribute holding force across a large contact area.
- The pivot is centered to reduce twisting load on the printed body.
- Washers are used on both outside faces and between moving surfaces.
- The bushing is currently made from thin black aluminum business card material.
- The printed body is treated mainly as a housing and alignment structure.
- Stainless pivot hardware carries the load that would otherwise damage plastic.

## Material Strategy

The first version should stay printed unless testing proves that metal is required. For this use case, a well-designed printed part with metal hardware may be stronger and more affordable than a fully printed part or an unnecessarily expensive machined part.

Recommended path:

1. Print and test in PLA.
2. Add stainless pivot hardware, washers, locknuts, and bushings.
3. Test the mechanism by hand on the boat.
4. Move to PETG or SLS PA12 nylon only if heat, flex, or wear become a problem.
5. Use CNC aluminum only if testing shows a real need for metal at the full part level.

## Electronics Plan

The first powered version will use a waterproof metal-gear servo in the 25 kg-cm to 35 kg-cm range. The servo should drive the rotating flag arm through a linkage or horn connection that does not bind at either end of travel.

Planned control features:

- Raise position
- Lower position
- Adjustable end stops in firmware
- Slow sweep motion to reduce shock load
- Optional button input
- Optional receiver or remote input
- Optional current or stall testing later

## Budget Target

The prototype is designed around a roughly $40 budget, assuming printed parts are made at home.

Likely purchases:

- Waterproof metal-gear servo
- Stainless pivot bolt or shoulder bolt
- Washers
- Locknut
- Bronze, nylon, or improvised aluminum bushing material
- Stainless clamp hardware
- Rubber or neoprene clamp liner

## Current Status

- Printed mechanical parts have been tested.
- The pivot works well with washer spacing.
- A thin aluminum bushing has been fabricated from black aluminum business cards.
- The design is ready for documentation, servo fit planning, and repeatable testing.

## Repository Layout

```text
projects/boat-flag-lifter/
  README.md
  docs/
    bom.md
    design-log.md
    electronics.md
    testing-plan.md
  cad/
    fusion360/
    step/
    stl/
  firmware/
    arduino/
      boat_flag_lifter_servo/
        boat_flag_lifter_servo.ino
  images/
    cad/
    prototype/
```

## Next Steps

- Add photos of the working printed parts.
- Export CAD files into STEP and STL folders.
- Measure exact pivot bolt size, washer stack height, and clamp bolt size.
- Confirm the servo location and linkage geometry.
- Test the mechanism on the boat with hand force before powered testing.
- Run the servo at low speed and confirm that the end stops do not bind.
