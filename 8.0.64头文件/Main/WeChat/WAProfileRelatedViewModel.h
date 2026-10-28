@interface WAProfileRelatedViewModel : MMObject
{
    unsigned long long _type; // +0x8
    NSString * _registerTitle; // +0x10
    NSArray * _infoList; // +0x18
    NSString * _mainTitle; // +0x20
    NSArray * _relateWeappList; // +0x28
}
- (id)initWithBrandList:(id)arg1;
- (id)initWithWeAppList:(id)arg1;
- (id)generateMainTitle:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)registerTitle;
- (void)setRegisterTitle:(id)arg1;
- (id)infoList;
- (void)setInfoList:(id)arg1;
- (id)mainTitle;
- (void)setMainTitle:(id)arg1;
- (id)relateWeappList;
- (void).cxx_destruct;
@end
