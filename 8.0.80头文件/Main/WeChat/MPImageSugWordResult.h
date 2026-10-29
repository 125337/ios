@interface MPImageSugWordResult : MMObject
{
    NSArray * _items; // +0x8
    NSString * _searchId; // +0x10
    NSString * _requestId; // +0x18
}
- (id)imageInfoForImgUrl:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (void).cxx_destruct;
@end
