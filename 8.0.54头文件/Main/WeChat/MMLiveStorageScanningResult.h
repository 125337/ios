@interface MMLiveStorageScanningResult : NSObject
{
    MMLiveStorageDirectory * _head; // +0x8
    NSMutableDictionary * _fileReferences; // +0x10
}
- (id)root;
- (id)sharedFileReferences;
- (id)head;
- (void)setHead:(id)arg1;
- (id)fileReferences;
- (void)setFileReferences:(id)arg1;
- (void).cxx_destruct;
@end

