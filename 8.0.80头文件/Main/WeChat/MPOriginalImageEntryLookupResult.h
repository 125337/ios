@interface MPOriginalImageEntryLookupResult : NSObject
{
    long long _state; // +0x8
    MPOriginalImageEntry * _entry; // +0x10
}
- (long long)state;
- (void)setState:(long long)arg1;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void).cxx_destruct;
@end
