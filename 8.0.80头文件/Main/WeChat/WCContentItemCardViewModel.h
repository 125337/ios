@interface WCContentItemCardViewModel : NSObject
{
    BOOL _showPicIcon; // +0x8
    BOOL _showSightPlayIcon; // +0x9
    unsigned long long _type; // +0x10
    unsigned long long _layoutStyle; // +0x18
    double _fittingHeight; // +0x20
    NSString * _avatar; // +0x28
    NSString * _thumbUrl; // +0x30
    NSString * _duration; // +0x38
    NSString * _nickName; // +0x40
    NSString * _desc; // +0x48
    NSString * _titleText; // +0x50
    NSString * _usrName; // +0x58
}
+ (id)fromContentItem:(id)arg1;
+ (double)calCoverFittingHeightWithThumbWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (id)debugDescription;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)layoutStyle;
- (void)setLayoutStyle:(unsigned long long)arg1;
- (double)fittingHeight;
- (void)setFittingHeight:(double)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)duration;
- (void)setDuration:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (BOOL)showPicIcon;
- (void)setShowPicIcon:(BOOL)arg1;
- (BOOL)showSightPlayIcon;
- (void)setShowSightPlayIcon:(BOOL)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)usrName;
- (void)setUsrName:(id)arg1;
- (void).cxx_destruct;
@end
