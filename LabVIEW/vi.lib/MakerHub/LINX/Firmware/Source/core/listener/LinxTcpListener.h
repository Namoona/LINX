/****************************************************************************************
**  LINX header for TCP listener.
**
**  For more information see:           www.labviewmakerhub.com/linx
**  For support visit the forums at:    www.labviewmakerhub.com/forums/linx
**  
**  Written By Sam Kristoff
**
** BSD2 License.
****************************************************************************************/	

#ifndef LINX_TCP_LISTENER_H
#define LINX_TCP_LISTENER_H

/****************************************************************************************
**  Includes
****************************************************************************************/		
#include "utility\LinxListener.h"
#include "..\device\utility\LinxDevice.h"

/****************************************************************************************
**  Type Defs
****************************************************************************************/		

/****************************************************************************************
**  Classes
****************************************************************************************/		
class LinxTcpListener : public LinxListener
{
	public:
		/****************************************************************************************
		**  Variables
		****************************************************************************************/		
		
		
		/****************************************************************************************
		**  Constructors
		****************************************************************************************/
		LinxTcpListener();		//Default Constructor
		
		/****************************************************************************************
		**  Functions
		****************************************************************************************/		

		
	private:
		/****************************************************************************************
		**  Variables
		****************************************************************************************/		
				
		/****************************************************************************************
		**  Functions
		****************************************************************************************/
	
};

#endif //LINX_TCP_LISTENER_H