@interface EcsShareData : NSObject
{
    BOOL _ableScreenshotQuickShare; // +0x8
    BOOL _needSwitchLink; // +0x9
    long long _cardType; // +0x10
    NSString * _cardData; // +0x18
    NSString * _fallbackJumpInfoJson; // +0x20
    long long _msgSourceTextType; // +0x28
    long long _imageDetailSourceTextType; // +0x30
    long long _imageDetailBottomSheetTextType; // +0x38
    NSString * _commonReportData; // +0x40
}
- (BOOL)ableScreenshotQuickShare;
- (void)setAbleScreenshotQuickShare:(BOOL)arg1;
- (BOOL)needSwitchLink;
- (void)setNeedSwitchLink:(BOOL)arg1;
- (long long)cardType;
- (void)setCardType:(long long)arg1;
- (id)cardData;
- (void)setCardData:(id)arg1;
- (id)fallbackJumpInfoJson;
- (void)setFallbackJumpInfoJson:(id)arg1;
- (long long)msgSourceTextType;
- (void)setMsgSourceTextType:(long long)arg1;
- (long long)imageDetailSourceTextType;
- (void)setImageDetailSourceTextType:(long long)arg1;
- (long long)imageDetailBottomSheetTextType;
- (void)setImageDetailBottomSheetTextType:(long long)arg1;
- (id)commonReportData;
- (void)setCommonReportData:(id)arg1;
- (void).cxx_destruct;
@end
