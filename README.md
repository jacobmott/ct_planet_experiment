# ct_planet_experiment
Walkthrough the planet youtube tut/video, terran generation and sequence level (movie scene). (How to Create Planets in Unreal Engine: Ground to Space Transition UE4 Tutorial) .. https://www.youtube.com/watch?v=otOPdOHWqWY


## AWS S3 Content folders (Syncing/Pull/Push to)

<details>
The Content folder for this github is stored in s3 bucket
Pull down from bucket
  
```
  aws s3 cp --recursive s3://<bucket>/ct_planet_experiment/Content ct_planet_experiment/Content   
```

Push to bucket
```
  aws s3 cp --recursive ct_planet_experiment/Content s3://<bucket>/ct_planet_experiment/Content
```

Or just do a sync
```
  aws s3 sync ct_planet_experiment/Content s3://<bucket>/ct_planet_experiment/Content --delete

```