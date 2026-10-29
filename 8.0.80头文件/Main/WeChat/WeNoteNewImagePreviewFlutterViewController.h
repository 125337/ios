@interface WeNoteNewImagePreviewFlutterViewController : MMFlutterViewController <TextStatePublishViewControllerDelegate>
{
    unsigned int _noteLocalId; // +0x70
    FlutterMethodChannel * _actionChannel; // +0x78
}
- (id)initWithFavItem:(id)arg1 contentSectionListData:(id)arg2 isSmallImageMode:(BOOL)arg3;
- (void)viewDidLoad;
- (void)setupActionChannel;
- (void)dealloc;
- (void)saveImageAtPath:(id)arg1 result:(id /* block */)arg2;
- (void)handleShareActionWithImagePath:(id)arg1 result:(id /* block */)arg2;
- (void)handleMomentActionWithImagePath:(id)arg1 result:(id /* block */)arg2;
- (id)convertImg2WCUploadTask:(id)arg1;
- (void)handleStateActionWithImagePath:(id)arg1 result:(id /* block */)arg2;
- (void)onTextStatePublished;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_collectAttachmentAttrsFromSections:(const void *)arg1 into:(void *)arg2;
- (id)_buildAttachmentPreviewDictsFromData:(id)arg1 favItem:(id)arg2;
- (unsigned int)noteLocalId;
- (void)setNoteLocalId:(unsigned int)arg1;
- (id)actionChannel;
- (void)setActionChannel:(id)arg1;
- (void).cxx_destruct;
@end
