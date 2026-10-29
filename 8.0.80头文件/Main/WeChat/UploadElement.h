@interface UploadElement : NSObject
{
    NSMutableDictionary * _m_fileInfos; // +0x8
    NSString * _m_commextrainfo; // +0x10
    NSString * _m_userName; // +0x18
}
- (id)init;
- (BOOL)addFile:(id)arg1 size:(unsigned long long)arg2;
- (BOOL)addFile:(id)arg1 startPos:(unsigned long long)arg2 endPos:(unsigned long long)arg3;
- (id)m_fileInfos;
- (void)setM_fileInfos:(id)arg1;
- (id)m_commextrainfo;
- (void)setM_commextrainfo:(id)arg1;
- (id)m_userName;
- (void)setM_userName:(id)arg1;
- (void).cxx_destruct;
@end
