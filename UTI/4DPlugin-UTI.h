/* --------------------------------------------------------------------------------
 #
 #	4DPlugin-UTI.h
 #	source generated by 4D Plugin Wizard
 #	Project : UTI
 #	author : miyako
 #	2020/09/03
 #  
 # --------------------------------------------------------------------------------*/

#ifndef PLUGIN_UTI_H
#define PLUGIN_UTI_H

#include "4DPluginAPI.h"

#import <Quartz/Quartz.h>

#include "C_LONGINT.h"
#include "C_TEXT.h"
#include "C_REAL.h"
#include "ARRAY_TEXT.h"

#pragma mark -

void PATH_GET_COMPONENTS(PA_PluginParameters params);
void PATH_Get_name(PA_PluginParameters params);
void PATH_Get_directory_path(PA_PluginParameters params);
void UTI_To_ostype(PA_PluginParameters params);
void UTI_To_mime(PA_PluginParameters params);
void UTI_To_extension(PA_PluginParameters params);
void UTI_From_ostype(PA_PluginParameters params);
void UTI_From_mime(PA_PluginParameters params);
void UTI_From_extension(PA_PluginParameters params);
void UTI_Equal(PA_PluginParameters params);
void UTI_Conforms_to(PA_PluginParameters params);
void UTI_Get_declaration(PA_PluginParameters params);
void UTI_Get_localized_description(PA_PluginParameters params);
void UTI_Get_icon(PA_PluginParameters params);
void UTI_Get_application(PA_PluginParameters params);
void UTI_Get_description(PA_PluginParameters params);
void PATH_Get_uti(PA_PluginParameters params);
void PATH_OPEN_WITH_APPLICATION(PA_PluginParameters params);
void PATH_Get_thumbnail(PA_PluginParameters params);

#define DEFAULT_ICON_SIZE 1024

#endif /* PLUGIN_UTI_H */
