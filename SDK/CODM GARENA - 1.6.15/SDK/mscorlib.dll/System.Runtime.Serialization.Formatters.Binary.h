#include "Includes/System.Runtime.Serialization.Formatters.Binary/BinaryCommon.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/BinaryElement.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/TypeTag.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/MethodFlags.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/ReturnTypeTag.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/BinaryFormatter.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/CodeGenerator.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/MessageFormatter.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/ObjectReader.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/TypeMetadata.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/ClrTypeMetadata.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/SerializableTypeMetadata.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/MemberTypeMetadata.h"
#include "Includes/System.Runtime.Serialization.Formatters.Binary/ObjectWriter.h"