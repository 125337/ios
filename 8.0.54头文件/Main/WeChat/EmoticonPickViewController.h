@interface EmoticonPickViewController : MMUIViewController <EmoticonCustomManageAddLogicDelegate>
{
    NSData * m_imageData; // +0x68
    UIImage * m_image; // +0x70
    UIView * m_emoticonBkgView; // +0x78
    NSString * m_localMd5; // +0x80
    UIImageView * _m_imageView; // +0x88
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0x90
}
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (void)initToolBar;
- (void)showTipsAndQuit:(id)arg1;
- (void)Cancel;
- (void)Confirm;
- (void)viewDidLoad;
- (void)setM_image:(id)arg1;
- (id)addEmoticonLogic;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (id)m_image;
- (id)m_emoticonBkgView;
- (void)setM_emoticonBkgView:(id)arg1;
- (id)m_localMd5;
- (void)setM_localMd5:(id)arg1;
- (id)m_imageView;
- (void)setM_imageView:(id)arg1;
- (void)setAddEmoticonLogic:(id)arg1;
- (void).cxx_destruct;
@end

