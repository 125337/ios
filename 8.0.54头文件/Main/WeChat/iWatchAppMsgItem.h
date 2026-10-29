@interface iWatchAppMsgItem : MMObject
{
    SnsObjItem * _snsObj; // +0x8
}
- (void)dealloc;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)snsObj;
- (void)setSnsObj:(id)arg1;
- (void).cxx_destruct;
@end

