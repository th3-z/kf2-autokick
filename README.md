KF2 Autokick
============

A Violentmonkey userscript for Killing Floor 2 server that automatically kicks
players based on their perk or level. This modification does not affect the
server's ranked status.

Originally authored by [pedr0](https://forums.tripwireinteractive.com/forum/killing-floor-2/killing-floor-2-modifications/general-modding-discussion-ad/beta-mod-releases/115511-webadmin-auto-kick-players-by-perk-level).


## Installation

These instructions are for Violentmonkey but this userscript should also be
compatible with other userscript addons such as Tampermonkey.

### Userscript setup

1. Install Violentmonkey for [FireFox](https://addons.mozilla.org/ja/firefox/addon/violentmonkey/)
    or [Chrome](https://chrome.google.com/webstore/detail/violentmonkey/jinjaccalgkegednnccohejagnlnfdag).
2. Open Violentmonkey's dashboard :gear:.
3. Open the settings tab.
4. Click 'Import from zip' and open `kf2-auto-kick-2.1.0.zip`.

### Server setup

1. Using a file browser, navigation to your Killing Floor 2 server install
    location.
2. Extract `kf2-auto-kick-2.1.0.zip` somewhere convenient.
2. Merge the provided `ServerAdmin` folder from `kf2-auto-kick-2.1.0.zip` with
    `kf2-server\KFGame\Web\ServerAdmin`.
3. Restart your Killing Floor 2 server.


## Running

1. Launch your Killing Floor 2 server.
2. Open your web browser with the userscript installed.
3. Navigate to the webadmin panel (default: http://localhost:8080).

A visible '1' on Violentmonkey's widget indicates the script is running. The
script will be active so long as you are logged into the webadmin panel, it
does not matter which page you are on.


## Configuration

1. Navigate to the webadmin panel (default: http://localhost:8080)
2. Open the 'Management Console' tab
2. Adjust the level and perk auto-kick settings as required, the new settings will apply after a few seconds.

Settings are stored per-server so multiple servers can be managed
independently.


## Changes since pedr0's release

* Fix issue with kicking players with multibyte chars in their name
* No longer have to keep the 'auto-kick' page open
