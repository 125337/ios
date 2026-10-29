@interface WCFinderLiveStarterLiveModeSubItem : NSObject <PBCoding>
{
    BOOL _isSelect; // +0x8
    unsigned long long _liveMode; // +0x10
    NSString * _title; // +0x18
    NSString * _subTitle; // +0x20
    NSString * _subDetail; // +0x28
    NSString * _redDotPath; // +0x30
    id /* block */ _redDotQueryBlock; // +0x38
    id /* block */ _redDotExposeBlock; // +0x40
    id /* block */ _redDotClickBlock; // +0x48
    double _width; // +0x50
    double _originX; // +0x58
    double _originY; // +0x60
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_redDotPath;
+ (void)initialize;
+ (id)getChangeVideoSubItemWithSubItem:(id)arg1;
+ (id)getInitVideoModeItem;
+ (id)getInitAudioModeItem;
+ (id)getInitGameModeItemWithAppId:(id)arg1 gameEntryScene:(long long)arg2;
+ (id)getGameSubItemWithLiveGameUserInfo:(id)arg1 gameEntryScene:(long long)arg2;
- (id)getPBPropertyTable;
- (BOOL)isVideoSubItem;
- (BOOL)isAudioSubItem;
- (BOOL)isGameSubItem;
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
- (id)redDotPath;
- (void)setRedDotPath:(id)arg1;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (id /* block */)redDotExposeBlock;
- (void)setRedDotExposeBlock:(id /* block */)arg1;
- (id /* block */)redDotClickBlock;
- (void)setRedDotClickBlock:(id /* block */)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)originX;
- (void)setOriginX:(double)arg1;
- (double)originY;
- (void)setOriginY:(double)arg1;
- (void).cxx_destruct;
@end

