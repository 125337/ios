@interface MMLiveGiftPAGOverlay : UIView <MMLiveGiftPAGOverlayExt>
{
    MMLiveTaskId * _taskId; // +0x8
    NSMutableArray * _tagLabelList; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTagLabelList;
- (id)createTagLabel;
- (id)getTagLabelWithTagName:(id)arg1 createIfNotExist:(BOOL)arg2;
- (void)onGiftPAGViewDisplay:(id)arg1 content:(id)arg2 taskId:(id)arg3;
- (void)onGiftPAGViewDisappear:(id)arg1 taskId:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)tagLabelList;
- (void)setTagLabelList:(id)arg1;
- (void).cxx_destruct;
@end
