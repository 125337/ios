@interface WCFinderCellIdentifier : NSObject
{
    long long hashValue; // +0x8
    id _object; // +0x10
    NSString * _section; // +0x18
    unsigned long long _secHash; // +0x20
    NSString * _item; // +0x28
    NSIndexPath * _indexPath; // +0x30
    long long _extField1; // +0x38
    NSObject * _extField2; // +0x40
    unsigned long long _duplicateIdx; // +0x48
}
+ (id)identifierForObject:(id)arg1;
+ (id)createIdentifierForObject:(id)arg1 setter:(id /* block */)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)object;
- (void)setObject:(id)arg1;
- (id)section;
- (void)setSection:(id)arg1;
- (unsigned long long)secHash;
- (void)setSecHash:(unsigned long long)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (long long)extField1;
- (void)setExtField1:(long long)arg1;
- (id)extField2;
- (void)setExtField2:(id)arg1;
- (unsigned long long)duplicateIdx;
- (void)setDuplicateIdx:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

