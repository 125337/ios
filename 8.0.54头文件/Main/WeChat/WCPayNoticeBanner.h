@interface WCPayNoticeBanner : MMUIView
{
    id <WCPayNoticeBannerDelegate> _delegate; // +0x8
    MMUILabel * _titleLabel; // +0x10
    NSString * _title; // +0x18
    NSString * _url; // +0x20
}
+ (double)bannerHeightWithFrame:(CGRect)arg1 title:(id)arg2 oneline:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2 url:(id)arg3 readonly:(BOOL)arg4 oneline:(BOOL)arg5;
- (void)setBackgroundColor:(id)arg1;
- (void)onTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

