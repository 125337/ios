@interface MMImageActionSearchItem : MMImageActionSheetItem
{
    WCImageSearchEntity * _searchEntity; // +0x8
}
- (id)init;
- (id)searchEntity;
- (void)handleWithImage;
- (void)setSearchEntity:(id)arg1;
- (void).cxx_destruct;
@end
