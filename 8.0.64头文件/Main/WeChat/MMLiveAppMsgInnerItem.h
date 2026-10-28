@interface MMLiveAppMsgInnerItem : NSObject
{
    BOOL _useDefaultLiveName; // +0x8
    unsigned long long _liveId; // +0x10
    MMGroupLiveInfoItem * _liveInfo; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (BOOL)useDefaultLiveName;
- (void)setUseDefaultLiveName:(BOOL)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (void).cxx_destruct;
@end
