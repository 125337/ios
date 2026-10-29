@interface WCFinderNavTabDefine : NSObject
{
    WCFinderNavTabTitle * _title; // +0x8
    WCFinderNavTabTitle * _selectedTitle; // +0x10
    NSString * _accessibilityLabel; // +0x18
    id /* block */ _pageGenerator; // +0x20
    NSString * _idenfitier; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)selectedTitle;
- (void)setSelectedTitle:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id /* block */)pageGenerator;
- (void)setPageGenerator:(id /* block */)arg1;
- (id)idenfitier;
- (void)setIdenfitier:(id)arg1;
- (void).cxx_destruct;
@end
