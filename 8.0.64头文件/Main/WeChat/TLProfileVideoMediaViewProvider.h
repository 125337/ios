@interface TLProfileVideoMediaViewProvider : NSObject <TLProfileMediaViewProvider>
{
    unsigned int type; // +0x8
    WCDataItem * _dataItem; // +0x10
    UIImage * _image; // +0x18
}
- (BOOL)supportCustomMedia;
- (id)initWithDataItem:(id)arg1 image:(id)arg2;
- (id)title;
- (id)expandableHeaderAccessibilityLabel;
- (id)headImageView;
- (BOOL)preferCustomView;
- (id)customView;
- (BOOL)useCoverForContent;
- (BOOL)doSourceActionWithViewController:(id)arg1;
- (BOOL)doHeadImageActionWithViewController:(id)arg1;
- (id)defaultImage;
- (id)mediaContentView;
- (id)mediaItem;
- (id)generateConfig;
- (id)mediaCoverView;
- (BOOL)allowReferBackground;
- (id)mediaDescription;
- (id)reportSourceFeedId;
- (BOOL)isInvalid;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void).cxx_destruct;
@end
