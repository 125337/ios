@interface RTESectionChangeInfo : MMObject
{
    unsigned long long _location; // +0x8
    unsigned long long _deletedLength; // +0x10
    unsigned long long _insertedLength; // +0x18
}
- (BOOL)isValid;
- (unsigned long long)location;
- (void)setLocation:(unsigned long long)arg1;
- (unsigned long long)deletedLength;
- (void)setDeletedLength:(unsigned long long)arg1;
- (unsigned long long)insertedLength;
- (void)setInsertedLength:(unsigned long long)arg1;
@end

