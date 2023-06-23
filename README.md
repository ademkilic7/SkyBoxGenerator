# SkyBoxGenerator Plugin

SkyBoxGenerator is a plugin developed for Unreal Engine 4.27 that allows you to generate skyboxes using the blokadelabs.com web service.

## Installation

1. Add the SkyBoxGenerator plugin to the "Plugins" folder in your project.

2. Open Unreal Editor and navigate to your project's Open Level Blueprint.

## Usage

### Generate Skybox

This function is used to generate a skybox.

#### Inputs

- ApiKey (String): Your blokadelabs.com API key.
- Prompt (String): The prompt text to be used for generating the skybox.
- SkyboxStyleId (Integer): The skybox style ID.
- WebhookUrl (String): The Webhook URL to receive notifications when the skybox generation process is completed.
- NegativeText (String, Optional): Negative text.
- Seed (Integer, Optional): Seed value to be used for skybox generation.
- RemixImagineId (Integer, Optional): Remix image ID.
- bReturnDepth (Boolean, Optional): Option to return the depth map.

#### Outputs

- OnSuccessCallback (Delegate): Event to be called when the skybox generation process is successful.
- OnErrorCallback (Delegate): Event to be called when an error occurs during the skybox generation process.

### Get Imagine History

This function is used to retrieve the user's skybox generation history.

#### Inputs

- ApiKey (String): Your blokadelabs.com API key.

#### Outputs

- OnSuccessCallback (Delegate): Event to be called when the skybox generation history is successfully retrieved.
- OnErrorCallback (Delegate): Event to be called when an error occurs while retrieving the skybox generation history.
