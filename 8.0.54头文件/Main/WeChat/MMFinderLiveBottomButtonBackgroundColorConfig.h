@interface MMFinderLiveBottomButtonBackgroundColorConfig : NSObject
{
    NSString * _commonBGColorHex; // +0x8
    NSString * _bottomButtonBGColorHexLandscapeLivePortraitMode; // +0x10
    NSString * _bottomButtonBGColorHexInConnectMic; // +0x18
}
+ (id)configFromButtonInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)commonBGColorHex;
- (void)setCommonBGColorHex:(id)arg1;
- (id)bottomButtonBGColorHexLandscapeLivePortraitMode;
- (void)setBottomButtonBGColorHexLandscapeLivePortraitMode:(id)arg1;
- (id)bottomButtonBGColorHexInConnectMic;
- (void)setBottomButtonBGColorHexInConnectMic:(id)arg1;
- (void).cxx_destruct;
@end

