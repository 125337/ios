@interface BizAppReaderMessageBigPicViewModel : NSObject
{
    BOOL _isLongPic; // +0x8
    NSString * _title; // +0x10
    unsigned long long _picCount; // +0x18
    NSArray * _titleLabelStyles; // +0x20
    NSString * _coverImageUrl; // +0x28
    AppMessageBigPicViewStyle * _viewStyle; // +0x30
    NSString * _sourceUsrname; // +0x38
    NSString * _sourceNickname; // +0x40
    CGSize _bigPicSize; // +0x48
    CGSize _coverOriginSize; // +0x58
    CGSize _titleSize; // +0x68
    CGSize _contentSize; // +0x78
}
+ (BOOL)isValidShareItem:(id)arg1;
- (id)initWithShareItem:(id)arg1 title:(id)arg2 sourceUsrname:(id)arg3 sourceNickname:(id)arg4 viewStyle:(id)arg5;
- (void)refreshLayout;
- (id)title;
- (void)setTitle:(id)arg1;
- (CGSize)bigPicSize;
- (void)setBigPicSize:(CGSize)arg1;
- (unsigned long long)picCount;
- (void)setPicCount:(unsigned long long)arg1;
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
- (id)sourceUsrname;
- (void)setSourceUsrname:(id)arg1;
- (id)sourceNickname;
- (void)setSourceNickname:(id)arg1;
- (void).cxx_destruct;
@end

