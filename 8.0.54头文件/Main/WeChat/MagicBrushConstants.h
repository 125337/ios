@interface MagicBrushConstants : MMUserService <MMServiceProtocol>
{
    NSMutableSet * _bizNameList; // +0x8
    NSMutableSet * _publicServiceList; // +0x10
    NSMutableSet * _bizNameWithPublicServiceList; // +0x18
    NSMutableSet * _bizUseBootsNameList; // +0x20
    NSMutableSet * _bizUseSCLNameList; // +0x28
    NSMutableSet * _bizUseADPSNameList; // +0x30
    NSMutableSet * _bizUseFeedBackNameList; // +0x38
    NSMutableSet * _bizSupportFrameSetCoverList; // +0x40
    NSMutableDictionary * _bizNameToProjectDic; // +0x48
    NSMutableDictionary * _projectToBizNameDic; // +0x50
    NSMutableDictionary * _allUDRExpt; // +0x58
}
- (void)onServiceInit;
- (void)dealloc;
- (id)getBizNameSet;
- (id)getPublicServiceSet;
- (id)getBizNameWithPublicServiceSet;
- (id)getUseBootsSet;
- (id)getUseSCLSet;
- (id)getUseADPSSet;
- (id)getUseFeedBackSet;
- (id)getSupportFrameSetCoverSet;
- (id)getPublicServiceSet:(id)arg1;
- (id)setUDRExpt;
- (BOOL)getExptFromBizName:(id)arg1;
- (id)getProjectIdFromBizName:(id)arg1;
- (id)getBizNameFromProjectId:(id)arg1;
- (BOOL)getCoverABTest:(id)arg1;
- (id)bizNameList;
- (void)setBizNameList:(id)arg1;
- (id)publicServiceList;
- (void)setPublicServiceList:(id)arg1;
- (id)bizNameWithPublicServiceList;
- (void)setBizNameWithPublicServiceList:(id)arg1;
- (id)bizUseBootsNameList;
- (void)setBizUseBootsNameList:(id)arg1;
- (id)bizUseSCLNameList;
- (void)setBizUseSCLNameList:(id)arg1;
- (id)bizUseADPSNameList;
- (void)setBizUseADPSNameList:(id)arg1;
- (id)bizUseFeedBackNameList;
- (void)setBizUseFeedBackNameList:(id)arg1;
- (id)bizSupportFrameSetCoverList;
- (void)setBizSupportFrameSetCoverList:(id)arg1;
- (id)bizNameToProjectDic;
- (void)setBizNameToProjectDic:(id)arg1;
- (id)projectToBizNameDic;
- (void)setProjectToBizNameDic:(id)arg1;
- (id)allUDRExpt;
- (void)setAllUDRExpt:(id)arg1;
- (void).cxx_destruct;
@end

