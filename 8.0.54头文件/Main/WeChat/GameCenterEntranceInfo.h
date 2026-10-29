@interface GameCenterEntranceInfo : NSObject
{
    BOOL _isIconRoundCorner; // +0x8
    BOOL _ignoreLocalControl; // +0x9
    unsigned int _cornerRadius; // +0xc
    int _basicType; // +0x10
    NSString * _iconUrl; // +0x18
    NSString * _desc; // +0x20
    long long _entranceNotifyType; // +0x28
    NSString * _coloredText; // +0x30
    NSString * _jumpLiveJsonStr; // +0x38
    NSString * _outerColoredText; // +0x40
    NSString * _clickOpenUrl; // +0x48
    long long _openType; // +0x50
    long long _entranceIconType; // +0x58
    CGSize _iconSize; // +0x60
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (long long)entranceNotifyType;
- (void)setEntranceNotifyType:(long long)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (BOOL)isIconRoundCorner;
- (void)setIsIconRoundCorner:(BOOL)arg1;
- (unsigned int)cornerRadius;
- (void)setCornerRadius:(unsigned int)arg1;
- (int)basicType;
- (void)setBasicType:(int)arg1;
- (BOOL)ignoreLocalControl;
- (void)setIgnoreLocalControl:(BOOL)arg1;
- (id)coloredText;
- (void)setColoredText:(id)arg1;
- (id)jumpLiveJsonStr;
- (void)setJumpLiveJsonStr:(id)arg1;
- (id)outerColoredText;
- (void)setOuterColoredText:(id)arg1;
- (id)clickOpenUrl;
- (void)setClickOpenUrl:(id)arg1;
- (long long)openType;
- (void)setOpenType:(long long)arg1;
- (long long)entranceIconType;
- (void)setEntranceIconType:(long long)arg1;
- (void).cxx_destruct;
@end

