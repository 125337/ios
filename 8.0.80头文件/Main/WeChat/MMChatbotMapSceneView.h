@interface MMChatbotMapSceneView : UIView <MMChatbotCardSceneBusiness>
{
    BOOL _readyReported; // +0x8
    BOOL _isDark; // +0x9
    MMChatbotCardSceneContext * _sceneCtx; // +0x10
    NSNumber * _latitude; // +0x18
    NSNumber * _longitude; // +0x20
    NSString * _title; // +0x28
    NSString * _address; // +0x30
    NSString * _poiName; // +0x38
    UILabel * _titleLabel; // +0x40
    UILabel * _subtitleLabel; // +0x48
    UIScrollView * _horizontalScrollView; // +0x50
    UIView * _horizontalContentView; // +0x58
    MMChatbotMapGridPlaceholderView * _mapPlaceholder; // +0x60
}
- (id)initWithSceneContext:(id)arg1;
- (void)dealloc;
- (void)onUpdate:(id)arg1;
- (void)applyPayload:(id)arg1 source:(id)arg2;
- (void)buildContent;
- (void)refreshTexts;
- (id)computeSubtitleAgainst:(id)arg1;
- (id)formatCoords;
- (void)setupGestures;
- (void)onTap:(id)arg1;
- (void)onChipHighlight:(id)arg1;
- (void)onChipUnhighlight:(id)arg1;
- (void)onChipTapped:(id)arg1;
- (void)showFloatingToast:(id)arg1;
- (void)didMoveToWindow;
- (id)numberFromObject:(id)arg1;
- (id)stringFromObject:(id)arg1;
- (id)sceneCtx;
- (void)setSceneCtx:(id)arg1;
- (BOOL)readyReported;
- (void)setReadyReported:(BOOL)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (BOOL)isDark;
- (void)setIsDark:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)horizontalScrollView;
- (void)setHorizontalScrollView:(id)arg1;
- (id)horizontalContentView;
- (void)setHorizontalContentView:(id)arg1;
- (id)mapPlaceholder;
- (void)setMapPlaceholder:(id)arg1;
- (void).cxx_destruct;
@end
