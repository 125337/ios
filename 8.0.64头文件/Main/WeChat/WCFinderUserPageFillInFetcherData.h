@interface WCFinderUserPageFillInFetcherData : NSObject
{
    FinderUserPageResponse * _resp; // +0x8
    WCFinderContact * _contact; // +0x10
    NSMutableArray * _dataItems; // +0x18
    NSMutableSet * _ids; // +0x20
}
- (id)resp;
- (void)setResp:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (id)ids;
- (void)setIds:(id)arg1;
- (void).cxx_destruct;
@end
