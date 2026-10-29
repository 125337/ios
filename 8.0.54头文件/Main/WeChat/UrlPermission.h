@interface UrlPermission : NSObject <NSCoding>
{
    JSAPIPermissionBitSet * m_permissionBitSet; // +0x8
    GeneralControlBitSet * m_generalControlBitSet; // +0x10
    DeepLinkBitSet * m_deepLinkBitSet; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)m_permissionBitSet;
- (void)setM_permissionBitSet:(id)arg1;
- (id)m_generalControlBitSet;
- (void)setM_generalControlBitSet:(id)arg1;
- (id)m_deepLinkBitSet;
- (void)setM_deepLinkBitSet:(id)arg1;
- (void).cxx_destruct;
@end

