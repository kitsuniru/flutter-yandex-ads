// Autogenerated from Pigeon (v3.2.6), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN


/// The codec used by YandexAdsRewarded.
NSObject<FlutterMessageCodec> *YandexAdsRewardedGetCodec(void);

@protocol YandexAdsRewarded
- (void)loadId:(NSString *)id error:(FlutterError *_Nullable *_Nonnull)error;
- (void)showWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void YandexAdsRewardedSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<YandexAdsRewarded> *_Nullable api);

NS_ASSUME_NONNULL_END
