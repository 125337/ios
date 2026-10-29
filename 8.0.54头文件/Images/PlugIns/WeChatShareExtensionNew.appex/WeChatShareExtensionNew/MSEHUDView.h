@interface MSEHUDView : UIView
{
    id <MSEHUDViewDelegate> _delegate; // +0x8
    UIImageView * _backgroundImgView; // +0x10
    UIImageView * _correctMarkView; // +0x18
    UILabel * _tipsLabel; // +0x20
}
- (id)init;
- (void)initView;
- (void)showCommonSendHUDViewTo:(id)arg1;
- (void)showSaveToFavHUDViewTo:(id)arg1;
- (void)showCommonHUDViewTo:(id)arg1 withTipsContent:(id)arg2;
- (void)showTipsViewInternale:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundImgView;
- (void)setBackgroundImgView:(id)arg1;
- (id)correctMarkView;
- (void)setCorrectMarkView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

