#import <RadarSDK/RadarSDK.h>
#import <RadarSDK/RadarSettings.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface RNRadar : RCTEventEmitter <RadarDelegate, RadarVerifiedDelegate, RCTBridgeModule, CLLocationManagerDelegate>

@end
