@interface ModifyPatSuffixLogic : MMObject
{
    id <ModifyPatSuffixLogicDelegate> _m_delegate; // +0x8
}
- (void)modifiedPatSuffix:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
