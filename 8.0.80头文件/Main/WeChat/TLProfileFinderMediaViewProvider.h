@interface TLProfileFinderMediaViewProvider : NSObject <TLProfileMediaViewProvider>
{
    BOOL _invalid; // +0x8
    unsigned int type; // +0xc
    NSString * _objectID; // +0x10
    NSString * _nonceID; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    WCFinderDataItem * _fallbackDataItem; // +0x28
}
- (BOOL)supportCustomMedia;
- (id)initWithFinderObjectID:(id)arg1 nonceID:(id)arg2;
- (id)initWithFinderShareItem:(id)arg1;
- (id)initWithFinderObjectID:(id)arg1 nonceID:(id)arg2 shareItem:(id)arg3;
- (id)displayDataItem;
- (id)fallbackDataItemWithShareItem:(id)arg1;
- (void)fillMissingDisplayInfoForDataItem:(id)arg1 fallbackDataItem:(id)arg2;
- (void)updateInvalidAndGetDetailDataItemIfNeeded;
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
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)fallbackDataItem;
- (void)setFallbackDataItem:(id)arg1;
- (BOOL)invalid;
- (void)setInvalid:(BOOL)arg1;
- (void).cxx_destruct;
@end
