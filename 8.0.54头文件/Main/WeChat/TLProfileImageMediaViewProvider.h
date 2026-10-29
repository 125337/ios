@interface TLProfileImageMediaViewProvider : NSObject <TLProfileMediaViewProvider>
{
    BOOL _invalid; // +0x8
    unsigned int type; // +0xc
    UIImage * _image; // +0x10
}
- (BOOL)supportCustomMedia;
- (id)initWithImage:(id)arg1;
- (id)title;
- (id)expandableHeaderAccessibilityLabel;
- (id)headImageView;
- (BOOL)preferCustomView;
- (id)customView;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)arg1;
- (BOOL)doHeadImageActionWithViewController:(id)arg1;
- (id)mediaContentView;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (id)reportSourceFeedId;
- (BOOL)isInvalid;
- (BOOL)hidesBlurForShortHeightMedias;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)invalid;
- (void)setInvalid:(BOOL)arg1;
- (void).cxx_destruct;
@end

