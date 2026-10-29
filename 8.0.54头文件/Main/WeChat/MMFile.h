@interface MMFile : NSObject <PBCoding>
{
    int _fileClass; // +0x8
    int _fileInUseType; // +0xc
    NSString * _name; // +0x10
    long long _size; // +0x18
    long long _fileID; // +0x20
}
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_fileID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (long long)compare:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
- (int)fileClass;
- (void)setFileClass:(int)arg1;
- (long long)fileID;
- (void)setFileID:(long long)arg1;
- (int)fileInUseType;
- (void)setFileInUseType:(int)arg1;
- (void).cxx_destruct;
@end

