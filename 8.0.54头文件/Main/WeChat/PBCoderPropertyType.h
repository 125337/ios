@interface PBCoderPropertyType : NSObject
{
    BOOL _m_isSuperPlaceHolder; // +0x8
    BOOL _m_isContainerUnpacked; // +0x9
    unsigned int _m_index; // +0xc
    int _m_cType; // +0x10
    int _m_subCType; // +0x14
    Class _m_cls; // +0x18
    Class _m_subCls; // +0x20
    id _m_blockGet; // +0x28
    id _m_blockSet; // +0x30
}
- (id)initWithClass:(Class)arg1 subClass:(Class)arg2 unpacked:(BOOL)arg3 index:(unsigned int)arg4 blockGet:(id)arg5 blockSet:(id)arg6;
- (id)initWithClass:(Class)arg1 subCType:(int)arg2 unpacked:(BOOL)arg3 index:(unsigned int)arg4 blockGet:(id)arg5 blockSet:(id)arg6;
- (id)initWithCType:(int)arg1 index:(unsigned int)arg2 blockGet:(id)arg3 blockSet:(id)arg4;
- (unsigned int)m_index;
- (void)setM_index:(unsigned int)arg1;
- (int)m_cType;
- (Class)m_cls;
- (Class)m_subCls;
- (int)m_subCType;
- (id)m_blockGet;
- (void)setM_blockGet:(id)arg1;
- (id)m_blockSet;
- (void)setM_blockSet:(id)arg1;
- (BOOL)m_isSuperPlaceHolder;
- (void)setM_isSuperPlaceHolder:(BOOL)arg1;
- (BOOL)m_isContainerUnpacked;
- (void)setM_isContainerUnpacked:(BOOL)arg1;
- (void).cxx_destruct;
@end

