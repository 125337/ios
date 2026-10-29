@interface ChatBotImageBrowseView : UIView <MsgFastBrowseViewDelegate, ChatBotThreeColumnImageBrowseViewDelegate>
{
    unsigned int _browseStyle; // +0x8
    MsgFastBrowseView * _msgFastBrowseView; // +0x10
    ChatBotThreeColumnImageBrowseView * _threeColumnView; // +0x18
    NSMutableArray * _imageInfos; // +0x20
    id /* block */ _imgInfoLoader; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 browseStyle:(unsigned int)arg2 imageInfoLoader:(id /* block */)arg3;
- (void)layoutSubviews;
- (void)layoutContentView;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (double)getVisibleHeight;
- (double)getContentViewY;
- (void)imageClick:(id)arg1 index:(long long)arg2;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (void)fullScreenImage:(id)arg1 index:(long long)arg2;
- (unsigned int)browseStyle;
- (void)setBrowseStyle:(unsigned int)arg1;
- (id)msgFastBrowseView;
- (void)setMsgFastBrowseView:(id)arg1;
- (id)threeColumnView;
- (void)setThreeColumnView:(id)arg1;
- (id)imageInfos;
- (void)setImageInfos:(id)arg1;
- (id /* block */)imgInfoLoader;
- (void)setImgInfoLoader:(id /* block */)arg1;
- (void).cxx_destruct;
@end
