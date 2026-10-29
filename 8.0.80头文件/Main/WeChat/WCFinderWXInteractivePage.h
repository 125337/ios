@interface WCFinderWXInteractivePage : NSObject
{
    int _selectTab; // +0x8
    int _allTab; // +0xc
    NSString * _title; // +0x10
    NSString * _pageIdentifier; // +0x18
    NSString * _pageVCClassName; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg1;
- (id)pageVCClassName;
- (void)setPageVCClassName:(id)arg1;
- (int)selectTab;
- (void)setSelectTab:(int)arg1;
- (int)allTab;
- (void)setAllTab:(int)arg1;
- (void).cxx_destruct;
@end
