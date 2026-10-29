@interface WCUserFileScanFolderItem : NSObject
{
    NSString * _parentPath; // +0x8
    unsigned long long _scanFileType; // +0x10
    unsigned long long _depth; // +0x18
}
- (id)parentPath;
- (void)setParentPath:(id)arg1;
- (unsigned long long)scanFileType;
- (void)setScanFileType:(unsigned long long)arg1;
- (unsigned long long)depth;
- (void)setDepth:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

