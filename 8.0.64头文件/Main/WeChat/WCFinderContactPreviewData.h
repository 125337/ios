@interface WCFinderContactPreviewData : NSObject <PBCoding>
{
    BOOL _showFeedPreview; // +0x8
    BOOL _showLikedList; // +0x9
    WCFinderContact * _contact; // +0x10
    NSArray * _dataItems; // +0x18
    unsigned long long _expectNextFetchTimestamp; // +0x20
    NSArray * _likeListDataItem; // +0x28
    InteractionData * _interactionData; // +0x30
    NSMutableArray * _previewItems; // +0x38
    MemberQAUserPagePreviewData * _memberQaData; // +0x40
    FinderPoiInteractionInfo * _poiInteractionInfo; // +0x48
}
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_showFeedPreview;
+ (void)PBArrayAdd_dataItems;
+ (void)PBArrayAdd_expectNextFetchTimestamp;
+ (void)PBArrayAdd_showLikedList;
+ (void)PBArrayAdd_likeListDataItem;
+ (void)PBArrayAdd_interactionData;
+ (void)PBArrayAdd_previewItems;
+ (void)PBArrayAdd_memberQaData;
+ (void)PBArrayAdd_poiInteractionInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)showFeedPreview;
- (void)setShowFeedPreview:(BOOL)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (unsigned long long)expectNextFetchTimestamp;
- (void)setExpectNextFetchTimestamp:(unsigned long long)arg1;
- (BOOL)showLikedList;
- (void)setShowLikedList:(BOOL)arg1;
- (id)likeListDataItem;
- (void)setLikeListDataItem:(id)arg1;
- (id)interactionData;
- (void)setInteractionData:(id)arg1;
- (id)previewItems;
- (void)setPreviewItems:(id)arg1;
- (id)memberQaData;
- (void)setMemberQaData:(id)arg1;
- (id)poiInteractionInfo;
- (void)setPoiInteractionInfo:(id)arg1;
- (void).cxx_destruct;
@end
