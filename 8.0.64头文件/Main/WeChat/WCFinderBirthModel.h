@interface WCFinderBirthModel : NSObject
{
    long long _birthYear; // +0x8
    long long _birthMonth; // +0x10
    NSDateComponents * _components; // +0x18
}
- (id)initWithYear:(long long)arg1 month:(long long)arg2;
- (id)initWithDate:(id)arg1;
- (void)setBirthYear:(long long)arg1;
- (void)setBirthMonth:(long long)arg1;
- (id)components;
- (id)genDate;
- (long long)birthYear;
- (long long)birthMonth;
- (void)setComponents:(id)arg1;
- (void).cxx_destruct;
@end
