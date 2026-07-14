# Design Log

## Background

The original idea was to make a powered boat flag lifter with machined aluminum parts. After pricing the parts, CNC aluminum came in around $188 per piece. With four main pieces required, the mechanical parts alone would cost roughly $752 before tax and shipping.

That cost changed the design direction. Instead of making the whole assembly metal, the current plan is to use printed parts for the body and place metal only at the load-bearing and wear points.

## Key Decisions

### Use Printed Parts First

The first functional assembly should be printed in PLA because it is inexpensive, fast to iterate, and good enough for proving the geometry. The goal is not to make the final material choice immediately. The goal is to learn where the mechanism actually needs strength.

### Make the Pivot Hardware Structural

The pivot bolt should carry the main structural load. This keeps the printed part from acting like a plastic axle and reduces wear at the most important joint.

### Use Washers and Bushings

The working prototype uses washers at the ends and middle of the rotating joint. A thin black aluminum business card was repurposed as bushing material. This is a useful prototype solution because it adds a low-friction wear surface without requiring custom machined inserts.

### Delay Aluminum Until Testing Proves It

Aluminum looks premium, but it is expensive and may not be necessary. For a boat flag mechanism, the likely weak points are the pivot, the stop, the clamp bolts, plastic threads, and heat exposure. Those can be improved without making every part from metal.

## Mechanical Risks

- PLA can soften if left in direct sun or stored in a hot location.
- Plastic threads can strip if bolts are repeatedly tightened.
- The pivot hole can wear if metal hardware is not used.
- A hard 90 degree stop can crack if the servo drives into it too aggressively.
- Clamp pressure can deform printed parts if the bolt load is concentrated.

## Design Improvements to Consider

- Add heat-set inserts or through-bolts instead of relying on plastic threads.
- Increase material around the pivot boss only where it improves load transfer.
- Add fillets around pivot and stop features.
- Add a rubber or neoprene liner inside the clamp.
- Use a stainless shoulder bolt if a standard bolt has too much play.
- Add a replaceable bushing sleeve around the pivot.
- Add a servo saver, spring, or compliant linkage if the arm can hit hard stops.

## Revision History

| Revision | Status | Notes |
| --- | --- | --- |
| Prototype 1 | Working mechanical test | Printed parts, washer stack, improvised aluminum bushing |
| Prototype 2 | Planned | Servo mount refinement and linkage test |
| Prototype 3 | Planned | Outdoor/boat testing and material upgrade if needed |
