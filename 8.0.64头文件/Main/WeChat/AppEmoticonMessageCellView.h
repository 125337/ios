@interface AppEmoticonMessageCellView : CommonMessageCellView <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>
{
    MMEmoticonView * m_emoticonView; // +0xb0
    SightIconView * m_sightIconView; // +0xb8
    UIImageView * m_bottomInfoBgView; // +0xc0
    EmoticonCustomAddLogicController * m_emoticonAddLogicController; // +0xc8
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutContentView;
- (void)updateProgress;
- (void)onAppear;
- (void)initEmoticonView;
- (void)showBottomInfoBgView;
- (void)showSightIconWithIconType:(int)arg1;
- (id)operationMenuItems;
- (void)onSaveEmoticon:(id)arg1;
- (void)onShowRelatedEmoticon:(id)arg1;
- (void)onTakeCameraFollow:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onTouchUpInside;
- (void)onClick;
- (void)startDownloadImage;
- (void)onLongTouch;
- (id)getViewController;
- (void)onClickAsRefer;
- (void).cxx_destruct;
@end
