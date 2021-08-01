#define LIB_NAME "IronsourceUnityAdapter"
#define MODULE_NAME "ironsource_unity_adapter"

#include <dmsdk/sdk.h>

static void LuaInit(lua_State* L){}

dmExtension::Result AppInitializeIronsourceUnityAdapter(dmExtension::AppParams* params){return dmExtension::RESULT_OK;}
dmExtension::Result InitializeIronsourceUnityAdapter(dmExtension::Params* params){LuaInit(params->m_L);return dmExtension::RESULT_OK;}
dmExtension::Result AppFinalizeIronsourceUnityAdapter(dmExtension::AppParams* params){return dmExtension::RESULT_OK;}
dmExtension::Result FinalizeIronsourceUnityAdapter(dmExtension::Params* params){return dmExtension::RESULT_OK;}
dmExtension::Result OnUpdateIronsourceUnityAdapter(dmExtension::Params* params){return dmExtension::RESULT_OK;}
void OnEventIronsourceUnityAdapter(dmExtension::Params* params, const dmExtension::Event* event){}

DM_DECLARE_EXTENSION(IronsourceUnityAdapter,
LIB_NAME,
AppInitializeIronsourceUnityAdapter,
AppFinalizeIronsourceUnityAdapter,
InitializeIronsourceUnityAdapter,
OnUpdateIronsourceUnityAdapter,
OnEventIronsourceUnityAdapter,
FinalizeIronsourceUnityAdapter)