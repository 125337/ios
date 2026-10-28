@interface WCFinderLiveStarterLiveModeSubItem : NSObject <PBCoding>
{
    BOOL _isInnerItem; // +0x8
    BOOL _isSelect; // +0x9
    BOOL _hideSelectButton; // +0xa
    unsigned long long _liveMode; // +0x10
    NSString * _title; // +0x18
    NSString * _subTitle; // +0x20
    NSString * _subDetail; // +0x28
    NSString * _redDotPathOuter; // +0x30
    NSString * _redDotPathInner; // +0x38
    id /* block */ _redDotQueryBlock; // +0x40
    id /* block */ _redDotExposeBlock; // +0x48
    id /* block */ _redDotClickBlock; // +0x50
    double _width; // +0x58
    double _originX; // +0x60
    double _originY; // +0x68
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_redDotPathOuter;
+ (void)PBArrayAdd_redDotPathInner;
+ (void)initialize;
+ (id)getChangeVideoSubItemWithSubItem:(id)arg1;
+ (id)getInitVideoModeItem;
+ (id)getInitGameModeItemWithAppId:(id)arg1 gameEntryScene:(long long)arg2;
+ (id)getGameSubItemWithLiveGameUserInfo:(id)arg1 gameEntryScene:(long long)arg2;
- (id)getPBPropertyTable;
- (BOOL)isVideoSubItem;
- (BOOL)isAudioSubItem;
- (BOOL)isGameSubItem;
- (id)redDotPath;
- (id)redDotId;
- (unsigned long long)redDotSource;
- (unsigned long long)redDotRefSource;
- (BOOL)canShowRedDot;
- (void)onRedDotExposed;
- (void)onRedDotClicked;
- (id)description;
- (unsigned long long)liveMode;
- (void)setLiveMode:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)subDetail;
- (void)setSubDetail:(id)arg1;
- (BOOL)isInnerItem;
- (void)setIsInnerItem:(BOOL)arg1;
- (id)redDotPathOuter;
- (void)setRedDotPathOuter:(id)arg1;
- (id)redDotPathInner;
- (void)setRedDotPathInner:(id)arg1;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (id /* block */)redDotExposeBlock;
- (void)setRedDotExposeBlock:(id /* block */)arg1;
- (id /* block */)redDotClickBlock;
- (void)setRedDotClickBlock:(id /* block */)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (BOOL)hideSelectButton;
- (void)setHideSelectButton:(BOOL)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)originX;
- (void)setOriginX:(double)arg1;
- (double)originY;
- (void)setOriginY:(double)arg1;
- (void).cxx_destruct;
@end
