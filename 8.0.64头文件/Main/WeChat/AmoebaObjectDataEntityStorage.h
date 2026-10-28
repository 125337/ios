@interface AmoebaObjectDataEntityStorage : NSObject
{
    NSMapTable * m_objectDataMap; // +0x8
}
- (id)init;
- (void)save:(id)arg1 withEntity:(id)arg2;
- (id)get:(id)arg1;
- (void)clear:(id)arg1;
- (void).cxx_destruct;
@end
