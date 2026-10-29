@interface WCLiveGameRankHalfScreenView : WCLiveHalfScreenView
{
    id /* block */ _jumpCallback; // +0x70
    MMWebImageView * _webImageView; // +0x78
    MMUILabel * _footerLabel; // +0x80
    NSString * _url; // +0x88
}
- (id)initWithDesc:(id)arg1 imageUrl:(id)arg2;
- (void)layoutUI;
- (void)onJumpButtonClicked;
- (id /* block */)jumpCallback;
- (void)setJumpCallback:(id /* block */)arg1;
- (id)webImageView;
- (void)setWebImageView:(id)arg1;
- (id)footerLabel;
- (void)setFooterLabel:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
