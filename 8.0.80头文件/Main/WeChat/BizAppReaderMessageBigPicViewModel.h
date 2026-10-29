@interface BizAppReaderMessageBigPicViewModel : NSObject
{
    BOOL _isLongPic; // +0x8
    BOOL _showFinderContactIcon; // +0x9
    BOOL _SnsCardStyleOptimization; // +0xa
    NSString * _title; // +0x10
    unsigned long long _bigPicType; // +0x18
    unsigned long long _picCount; // +0x20
    unsigned long long _videoDuration; // +0x28
    NSArray * _titleLabelStyles; // +0x30
    NSString * _coverImageUrl; // +0x38
    AppMessageBigPicViewStyle * _viewStyle; // +0x40
    NSString * _sourceUsrname; // +0x48
    NSString * _sourceNickname; // +0x50
    NSString * _articleURL; // +0x58
    CGSize _bigPicSize; // +0x60
    CGSize _coverOriginSize; // +0x70
    CGSize _titleSize; // +0x80
    CGSize _contentSize; // +0x90
}
+ (BOOL)supportVideoBigPicStyle;
- (id)initWithShareItem:(id)arg1 title:(id)arg2 sourceUsrname:(id)arg3 sourceNickname:(id)arg4 articleURL:(id)arg5 viewStyle:(id)arg6;
- (void)refreshLayout;
- (void)onCoverImageReady:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)bigPicType;
- (void)setBigPicType:(unsigned long long)arg1;
- (CGSize)bigPicSize;
- (void)setBigPicSize:(CGSize)arg1;
- (unsigned long long)picCount;
- (void)setPicCount:(unsigned long long)arg1;
- (unsigned long long)videoDuration;
- (void)setVideoDuration:(unsigned long long)arg1;
- (CGSize)coverOriginSize;
- (void)setCoverOriginSize:(CGSize)arg1;
- (id)titleLabelStyles;
- (void)setTitleLabelStyles:(id)arg1;
- (CGSize)titleSize;
- (void)setTitleSize:(CGSize)arg1;
- (id)coverImageUrl;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (id)viewStyle;
- (void)setViewStyle:(id)arg1;
- (BOOL)isLongPic;
- (void)setIsLongPic:(BOOL)arg1;
- (BOOL)showFinderContactIcon;
- (void)setShowFinderContactIcon:(BOOL)arg1;
- (id)sourceUsrname;
- (void)setSourceUsrname:(id)arg1;
- (id)sourceNickname;
- (void)setSourceNickname:(id)arg1;
- (BOOL)SnsCardStyleOptimization;
- (void)setSnsCardStyleOptimization:(BOOL)arg1;
- (id)articleURL;
- (void)setArticleURL:(id)arg1;
- (void).cxx_destruct;
@end
