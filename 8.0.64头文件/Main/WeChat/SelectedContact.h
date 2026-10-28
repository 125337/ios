@interface SelectedContact : NSObject
{
    CContact * _contact; // +0x8
    unsigned long long _type; // +0x10
}
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
