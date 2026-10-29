@interface TingAudioRadioSquareDataServiceCpp : UnitRCObjcBaseProxyClass <TingAudioRadioSquareDataService>
+ (id)sharedInstance;
+ (int)feedItemSourceType:(id)arg1;
- (BOOL)hasMore;
- (int)getLoadingStatus;
- (void)next;
- (void)autoNext;
- (void)previous;
- (void)onCurrentPageChanged:(int)arg1 reason:(int)arg2;
- (void)playCurrentPage:(int)arg1;
- (void)updateRadioItemSession:(id)arg1;
- (void)initSectionData:(id)arg1;
- (void)initSectionReq:(id)arg1 clearData:(BOOL)arg2 reportSession:(id)arg3;
- (id)getCacheSectionData;
- (id)getAllSectionData;
- (int)getSectionUnreadCount:(id)arg1;
- (void)editSectionMixFeedItem:(id)arg1 categoryId:(id)arg2 index:(int)arg3 operation:(int)arg4;
- (id)radioShutdownController;
@end

