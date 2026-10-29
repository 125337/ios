@interface EcsPreviewImageViewController : PhotoViewController
{
    BOOL _isPresentMode; // +0x81
    NSString * _mbPassBuffer; // +0x88
    NSString * _mbPassThirdExtInfo; // +0x90
    NSString * _mbPassClickReportInfoFor33399; // +0x98
}
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragCancel;
- (id)sclView;
- (void)setSclViewHidden:(BOOL)arg1;
- (BOOL)disMissSelf;
- (id)thirdExtInfoForSearch;
- (id)clickReportInfoFor33399;
- (id)mbPassBuffer;
- (void)setMbPassBuffer:(id)arg1;
- (BOOL)isPresentMode;
- (void)setIsPresentMode:(BOOL)arg1;
- (id)mbPassThirdExtInfo;
- (void)setMbPassThirdExtInfo:(id)arg1;
- (id)mbPassClickReportInfoFor33399;
- (void)setMbPassClickReportInfoFor33399:(id)arg1;
- (void).cxx_destruct;
@end
