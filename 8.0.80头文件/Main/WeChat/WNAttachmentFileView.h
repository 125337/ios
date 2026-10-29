@interface WNAttachmentFileView : WNAttachmentBaseView <GroupNoticeUploadExt, SightIconViewDelegate, MsgRecordFileDetailDelegate>
{
    unsigned char _status; // +0x8
    SightIconView * _uploadingView; // +0x10
    MMUILabel * _hintLabel; // +0x18
}
- (id)initWithAttachment:(id)arg1;
- (void)layoutView;
- (id)getTitle;
- (id)getDescription;
- (id)getImage;
- (void)onClickObject;
- (void)initUploadUI;
- (void)initUploadingView;
- (void)initHintLabel;
- (void)updateUploadUI:(unsigned char)arg1;
- (void)updateUploadUI:(unsigned char)arg1 forceUpdate:(BOOL)arg2;
- (void)onPreparingUploadGroupNoticeData:(id)arg1;
- (void)onUploadGroupNoticeData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onUploadGroupNoticeData:(id)arg1 success:(BOOL)arg2;
- (void)onProgressEnd;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (id)uploadingView;
- (void)setUploadingView:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (unsigned char)status;
- (void)setStatus:(unsigned char)arg1;
- (void).cxx_destruct;
@end
